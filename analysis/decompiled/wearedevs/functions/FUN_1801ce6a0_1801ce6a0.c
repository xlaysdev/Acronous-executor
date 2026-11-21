/* FUN_1801ce6a0 @ 1801ce6a0 */

void FUN_1801ce6a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(char *)(param_1 + 1) != '\x01') {
    lVar2 = FUN_1801cbac0(*puVar1,",",1);
    if (lVar2 != 0) goto LAB_1801ce724;
  }
  *(undefined1 *)(param_1 + 1) = 2;
  lVar2 = FUN_1801ce850(puVar1);
  if (lVar2 == 0) {
    lVar2 = FUN_1801cbac0(*puVar1,":",1);
    if (lVar2 == 0) {
      FUN_1801cee30(param_3,puVar1);
      return;
    }
  }
LAB_1801ce724:
  FUN_1801ff6a0(lVar2);
  return;
}


