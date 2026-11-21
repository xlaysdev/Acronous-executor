/* FUN_180200020 @ 180200020 */

void FUN_180200020(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  ulonglong local_30;
  
  FUN_1801ed660(&local_50);
  if (SBORROW8(0,local_50)) {
    local_88 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_80 = 1;
    local_30 = 0;
    iVar2 = getaddrinfo(local_48,0,&local_88,&local_30);
    if (iVar2 == 0) {
      uVar1 = *param_4;
      param_1[2] = local_30;
      *(undefined2 *)(param_1 + 3) = uVar1;
      uVar4 = local_30;
    }
    else {
      uVar3 = WSAGetLastError();
      uVar4 = (ulonglong)uVar3 << 0x20 | 2;
    }
    param_1[1] = uVar4;
    *param_1 = (ulonglong)(iVar2 != 0);
    *local_48 = 0;
    if (local_40 == 0) {
      return;
    }
  }
  else {
    param_1[1] = (ulonglong)&PTR_s_file_name_contained_an_unexpecte_18028f770;
    *param_1 = 1;
    if (local_50 == 0) {
      return;
    }
    local_40 = local_50;
  }
  thunk_FUN_1801d3330(local_48,local_40,1);
  return;
}


