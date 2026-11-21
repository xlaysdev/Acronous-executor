/* FUN_1801dc3b0 @ 1801dc3b0 */

ulonglong FUN_1801dc3b0(undefined4 *param_1,char *param_2,ulonglong param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  uint3 uVar4;
  int iVar5;
  DWORD DVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_34;
  
  uVar2 = *param_1;
  LOCK();
  cVar1 = *param_2;
  *param_2 = '\0';
  UNLOCK();
  if (cVar1 == '\x02') {
    WakeByAddressSingle(param_2);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  uVar7 = SUB168(auVar3 * ZEXT816(1000),0);
  uVar10 = 0xffffffff;
  if (SUB168(auVar3 * ZEXT816(1000),8) == 0) {
    uVar9 = (ulonglong)param_4 / 1000000;
    uVar8 = uVar7 + uVar9;
    if (((!CARRY8(uVar7,uVar9)) &&
        (uVar9 = (ulonglong)(param_4 + (int)uVar9 * -1000000 != 0), uVar7 = uVar8 + uVar9,
        !CARRY8(uVar8,uVar9))) && (uVar10 = 0xffffffff, uVar7 < 0xffffffff)) {
      uVar10 = uVar7;
    }
  }
  local_34 = uVar2;
  iVar5 = WaitOnAddress(param_1,&local_34,4,uVar10);
  uVar4 = (uint3)((uint)uVar2 >> 8);
  uVar10 = CONCAT71((uint7)uVar4,1);
  if (iVar5 != 1) {
    DVar6 = GetLastError();
    uVar10 = (ulonglong)CONCAT31(uVar4,DVar6 != 0x5b4);
  }
  LOCK();
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    *param_2 = '\x01';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    FUN_180200390(param_2);
  }
  return uVar10;
}


