/* FUN_180186d50 @ 180186d50 */

ulonglong FUN_180186d50(SOCKET param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  local_18 = 0;
  if (*(uint *)(param_2 + 0x10) != 1000000000) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulonglong *)(param_2 + 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulonglong)*(uint *)(param_2 + 0x10) / 1000000;
    auVar3 = ZEXT816(1000) * auVar1 + auVar3;
    uVar7 = auVar3._0_8_;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    local_18 = -(uint)(auVar3._8_8_ != 0) | (uint)uVar7;
  }
  if (*(uint *)(param_2 + 0x20) != 1000000000) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(param_2 + 0x18);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulonglong)*(uint *)(param_2 + 0x20) / 1000000;
    auVar4 = ZEXT816(1000) * auVar2 + auVar4;
    uVar7 = auVar4._0_8_;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    local_14 = -(uint)(auVar4._8_8_ != 0) | (uint)uVar7;
  }
  local_1c = 1;
  local_24 = 0;
  iVar5 = WSAIoctl(param_1,0x98000004,&local_1c,0xc,0,0,&local_24,0,0);
  if (iVar5 == -1) {
LAB_180186e7d:
    DVar6 = GetLastError();
    return (ulonglong)DVar6 << 0x20 | 2;
  }
  if (*param_2 != '\0') {
    local_20 = *(undefined4 *)(param_2 + 4);
    iVar5 = setsockopt(param_1,6,0x10,(char *)&local_20,4);
    if (iVar5 == -1) goto LAB_180186e7d;
  }
  return 0;
}


