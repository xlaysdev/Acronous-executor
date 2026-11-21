/* FUN_18007c570 @ 18007c570 */

void FUN_18007c570(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_18007a660();
  if (*(longlong *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018007c5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x20))
              (*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xe8),
               *(undefined8 *)(param_1 + 0xf0));
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  return;
}


