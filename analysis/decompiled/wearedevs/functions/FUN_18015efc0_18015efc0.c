/* FUN_18015efc0 @ 18015efc0 */

undefined8 FUN_18015efc0(undefined8 param_1,longlong *param_2)

{
  longlong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  
  local_28 = *param_2;
  if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18025f068);
  }
  local_10 = param_2[3];
  local_20 = (undefined4)param_2[1];
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_18 = (undefined4)param_2[2];
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_1801aadd0(param_1,&local_28);
  return param_1;
}


