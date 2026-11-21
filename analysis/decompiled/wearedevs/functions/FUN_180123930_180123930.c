/* FUN_180123930 @ 180123930 */

void FUN_180123930(undefined8 *param_1,char param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 1;
  if (999999999 < *(uint *)(param_1 + 5)) {
    iVar1 = *(uint *)(param_1 + 5) + 0xc4653600;
  }
  if (iVar1 == 0) {
    if ((param_2 != '\0') && (*(char *)(param_1 + 10) == '\0')) {
      return;
    }
  }
  else if ((iVar1 == 1) || (*(int *)(param_3 + 0x18) != 1000000000)) {
    return;
  }
  iVar1 = *(int *)(param_3 + 0x38);
  if (iVar1 == 1000000000) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("keep_alive expects last_read_at",0x1f,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802421f8);
  }
  uVar2 = FUN_1801e5a10(*(undefined8 *)(param_3 + 0x30),iVar1,*param_1,*(undefined4 *)(param_1 + 1))
  ;
  param_1[4] = uVar2;
  *(int *)(param_1 + 5) = iVar1;
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("You must supply a timer.C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\common\\time.rs"
                  ,0x31,&DAT_180242aa0,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001801239cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[9] + 0x30))
            (param_1[8] + (*(longlong *)(param_1[9] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
             param_1 + 6,uVar2);
  return;
}


