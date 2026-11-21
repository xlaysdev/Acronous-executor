/* FUN_180152990 @ 180152990 */

longlong * FUN_180152990(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined1 local_38 [8];
  int local_30;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_18015fac0(param_2,uVar1,param_4);
  local_3c = param_3;
  uVar2 = FUN_180153f70(param_2 + 0x60,&local_3c);
  uVar3 = (undefined4)uVar1;
  FUN_180154740(local_38,param_2 + 0x28,uVar2,param_3,uVar3);
  if (local_30 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.ids.insert(id, index).is_none()",0x36,
                  &PTR_s_C__Users_burne__cargo_registry_s_180257b58);
  }
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *param_1 = param_2;
  return param_1;
}


