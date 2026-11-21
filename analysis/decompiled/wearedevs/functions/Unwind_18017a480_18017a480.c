/* Unwind@18017a480 @ 18017a480 */

void Unwind_18017a480(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_2 + 0x95);
  lVar2 = *(longlong *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  if (((*(longlong *)(param_2 + 0x40) != 0) && ((*(byte *)(param_2 + 0x97) & 1) != 0)) &&
     ((*(byte *)(param_2 + 0x96) & 1) != 0)) {
    (**(code **)(*(longlong *)(param_2 + 0x40) + 0x18))(*(undefined8 *)(param_2 + 0x48));
  }
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_18000aa80(lVar2,uVar3);
  }
  return;
}


