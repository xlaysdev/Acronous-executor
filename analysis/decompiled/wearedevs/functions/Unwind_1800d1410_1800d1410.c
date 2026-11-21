/* Unwind@1800d1410 @ 1800d1410 */

void Unwind_1800d1410(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x23c);
  uVar2 = *(undefined8 *)(param_2 + 0x1f0);
  uVar3 = *(undefined8 *)(param_2 + 0x1f8);
  FUN_180093a60(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0x228) = uVar3;
  *(undefined8 *)(param_2 + 0x220) = uVar2;
  *(undefined1 *)(param_2 + 0x23d) = uVar1;
  return;
}


