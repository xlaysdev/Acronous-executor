/* FUN_180116070 @ 180116070 */

void FUN_180116070(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  bVar1 = *param_1;
  if ((1 < bVar1 - 2) && (bVar1 != 0)) {
    if (bVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001801160b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
                (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),*(code **)(*(longlong *)(param_1 + 8) + 0x20));
      return;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (((uint)lVar2 & 3) == 1) {
      uVar3 = *(undefined8 *)(lVar2 + -1);
      puVar4 = *(undefined8 **)(lVar2 + 7);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(uVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
      }
      thunk_FUN_1801d3330(lVar2 + -1,0x18,8);
      return;
    }
  }
  return;
}


