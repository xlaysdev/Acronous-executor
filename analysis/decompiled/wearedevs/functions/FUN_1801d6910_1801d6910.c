/* FUN_1801d6910 @ 1801d6910 */

ulonglong FUN_1801d6910(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  switch((uint)lVar1 & 3) {
  case 0:
    FUN_1801ef980(&local_48,param_2,"Error",5);
    uVar2 = FUN_1801ef590(&local_48,&DAT_18028efd8,4,lVar1 + 0x10,&DAT_18028efb8);
    uVar2 = FUN_1801ef590(uVar2,"message",7,lVar1,"");
    uVar3 = FUN_1801ef720(uVar2);
    break;
  case 1:
    local_48 = lVar1 + -1;
    uVar3 = FUN_1801f0500(param_2,"Custom",6,&DAT_18028efd8,4,lVar1 + 0xf,&DAT_18028efb8,"error",5,
                          &local_48,&DAT_18028f030);
    break;
  case 2:
    local_30 = (undefined4)((ulonglong)lVar1 >> 0x20);
    FUN_1801ef980(local_58,param_2,"Os",2);
    uVar2 = FUN_1801ef590(local_58,&DAT_18028efb0,4,&local_30,&DAT_18028ef90);
    local_29 = FUN_1801daa10(local_30);
    uVar2 = FUN_1801ef590(uVar2,&DAT_18028efd8,4,&local_29,&DAT_18028efb8);
    FUN_1801dac70(&local_48,local_30);
    uVar2 = FUN_1801ef590(uVar2,"message",7,&local_48,&PTR_LAB_18028efe0);
    uVar3 = FUN_1801ef720(uVar2);
    if (local_48 != 0) {
      uVar3 = uVar3 & 0xffffffff;
      thunk_FUN_1801d3330(local_40,local_48,1);
    }
    break;
  case 3:
    local_58[0] = (undefined1)((ulonglong)lVar1 >> 0x20);
    FUN_1801ef930(&local_48,param_2,"Kind",4);
    uVar2 = FUN_1801ef320(&local_48,local_58,&DAT_18028efb8);
    uVar3 = FUN_1801ef450(uVar2);
  }
  return uVar3;
}


