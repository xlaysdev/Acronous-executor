/* FUN_1801e3c90 @ 1801e3c90 */

ulonglong FUN_1801e3c90(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined **local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)*param_1;
  switch((uint)puVar1 & 3) {
  case 0:
    uVar2 = FUN_1801edcb0(*puVar1,puVar1[1],param_2);
    return uVar2;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x0001801e3dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)((longlong)puVar1 + 7) + 0x20))
                      (*(undefined8 *)((longlong)puVar1 - 1),param_2);
    return uVar2;
  case 2:
    local_2c = (undefined4)((ulonglong)puVar1 >> 0x20);
    FUN_1801dac70(&local_48);
    local_60 = &LAB_1801e3bf0;
    local_58 = &local_2c;
    local_50 = FUN_1801ee530;
    local_68 = &local_48;
    uVar2 = FUN_1801ef150(*param_2,param_2[1],&DAT_180290dc0,&local_68);
    if (local_48 != (undefined *)0x0) {
      uVar2 = uVar2 & 0xffffffff;
      thunk_FUN_1801d3330(local_40,local_48,1);
    }
    break;
  case 3:
    local_40 = *(undefined8 *)(&DAT_180291610 + ((ulonglong)puVar1 >> 0x20) * 8);
    local_48 = (&PTR_s_entity_not_found_180291760)[(ulonglong)puVar1 >> 0x20];
    local_68 = &local_48;
    local_60 = &LAB_1801e1670;
    uVar2 = FUN_1801ef150(*param_2,param_2[1],&DAT_18028eaa9,&local_68);
  }
  return uVar2;
}


