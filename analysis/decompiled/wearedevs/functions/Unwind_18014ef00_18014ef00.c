/* Unwind@18014ef00 @ 18014ef00 */

void Unwind_18014ef00(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  bVar1 = *(byte *)(param_2 + 0x4b2);
  *(undefined1 *)(param_2 + 0x490) = *(undefined1 *)(param_2 + 0x4b3);
  *(undefined1 *)(param_2 + 0x4a4) = *(undefined1 *)(param_2 + 0x4b4);
  *(undefined1 *)(param_2 + 0x468) = *(undefined1 *)(param_2 + 0x4b5);
  if (*(char *)(param_2 + 0x4b6) == '\0') {
    *(char *)(param_2 + 0x4b1) = (char)*(undefined4 *)(param_2 + 0x48c);
    *(undefined1 *)(param_2 + 0x4b0) = 0;
    *(undefined1 *)(param_2 + 0x4af) = *(undefined1 *)(param_2 + 0x468);
    *(undefined1 *)(param_2 + 0x4ae) = *(undefined1 *)(param_2 + 0x4a4);
    *(undefined1 *)(param_2 + 0x4ad) = *(undefined1 *)(param_2 + 0x490);
    *(byte *)(param_2 + 0x4ac) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0x4ab) = 0;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x440);
  uVar3 = *(undefined8 *)(param_2 + 0x420);
  uVar4 = *(undefined8 *)(param_2 + 0x428);
  uVar5 = *(undefined8 *)(param_2 + 0x430);
  lVar6 = *(longlong *)(param_2 + 0x448);
  *(undefined8 *)(param_2 + 0x450) = *(undefined8 *)(param_2 + 0x3c8);
  *(undefined8 *)(param_2 + 0x458) = *(undefined8 *)(param_2 + 0x3d0);
  uVar7 = *(undefined8 *)(param_2 + 0x3d8);
  FUN_18014c5b0(*(undefined1 *)(param_2 + 0x4b7),*(undefined8 *)(param_2 + 0x3f8));
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x20))(uVar5,uVar3,uVar4);
  }
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x20))
              (uVar7,*(undefined8 *)(param_2 + 0x450),*(undefined8 *)(param_2 + 0x458));
  }
  *(char *)(param_2 + 0x4b1) = (char)*(undefined4 *)(param_2 + 0x48c);
  *(undefined1 *)(param_2 + 0x4b0) = 1;
  *(undefined1 *)(param_2 + 0x4af) = *(undefined1 *)(param_2 + 0x468);
  *(undefined1 *)(param_2 + 0x4ae) = *(undefined1 *)(param_2 + 0x4a4);
  *(undefined1 *)(param_2 + 0x4ad) = *(undefined1 *)(param_2 + 0x490);
  *(byte *)(param_2 + 0x4ac) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0x4ab) = 0;
  return;
}


