/* FUN_180044700 @ 180044700 */

void FUN_180044700(char *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != '\0') {
    if (*(longlong *)(param_1 + 8) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180044738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


