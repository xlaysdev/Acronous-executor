/* Unwind@18014ebd0 @ 18014ebd0 */

void Unwind_18014ebd0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4a8);
  uVar2 = *(undefined1 *)(param_2 + 0x4a9);
  uVar3 = *(undefined8 *)(param_2 + 0x3c0);
  (**(code **)(*(longlong *)(param_2 + 0x1a0) + 0x20))
            (*(undefined8 *)(param_2 + 0x1b8),*(undefined8 *)(param_2 + 0x1a8),
             *(undefined8 *)(param_2 + 0x1b0));
  *(undefined8 *)(param_2 + 0x448) = 0;
  *(undefined8 *)(param_2 + 0x430) = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(param_2 + 0x428) = *(undefined8 *)(param_2 + 0x450);
  *(undefined8 *)(param_2 + 0x420) = *(undefined8 *)(param_2 + 0x468);
  *(undefined8 *)(param_2 + 0x440) = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(param_2 + 0x3f8) = uVar3;
  *(undefined1 *)(param_2 + 0x4b7) = uVar2;
  *(undefined1 *)(param_2 + 0x4b6) = 1;
  *(undefined1 *)(param_2 + 0x4b5) = 0;
  *(undefined1 *)(param_2 + 0x4b4) = uVar1;
  *(char *)(param_2 + 0x4b3) = (char)*(undefined4 *)(param_2 + 0x490);
  *(undefined1 *)(param_2 + 0x4b2) = 1;
  return;
}


