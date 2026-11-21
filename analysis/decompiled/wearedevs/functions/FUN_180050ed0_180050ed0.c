/* FUN_180050ed0 @ 180050ed0 */

void FUN_180050ed0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((*param_1 != 6) && (iVar4 = (int)*param_1, iVar4 != 5)) {
    if (iVar4 != 4) {
      if (iVar4 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000180050f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1[1] + 0x20))
                  (param_1[4],param_1[2],param_1[3],*(code **)(param_1[1] + 0x20));
        return;
      }
      FUN_1800430f0();
      return;
    }
    lVar1 = param_1[1];
    if (((uint)lVar1 & 3) == 1) {
      uVar2 = *(undefined8 *)(lVar1 + -1);
      puVar3 = *(undefined8 **)(lVar1 + 7);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      }
      thunk_FUN_1801d3330(lVar1 + -1,0x18,8);
      return;
    }
  }
  return;
}


