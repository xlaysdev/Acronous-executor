/* FUN_1801e3c50 @ 1801e3c50 */

undefined8 FUN_1801e3c50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (((uint)lVar1 & 3) == 1) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 7) + 0x30))(*(undefined8 *)(lVar1 + -1));
    return uVar2;
  }
  return 0;
}


