/* FUN_180132930 @ 180132930 */

void FUN_180132930(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)*param_2;
  uVar1 = (*(code *)*puVar2)(((undefined8 *)*param_2)[1]);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x98) + 0x18))(*(undefined8 *)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 **)(param_1 + 0xa0) = puVar2;
  return;
}


