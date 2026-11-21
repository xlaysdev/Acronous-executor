/* Unwind@18014f0c0 @ 18014f0c0 */

void Unwind_18014f0c0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)(param_2 + 0x488);
  bVar2 = *(byte *)(param_2 + 0x489);
  bVar3 = *(byte *)(param_2 + 0x48a);
  bVar4 = *(byte *)(param_2 + 0x48b);
  if ((*(char *)(param_2 + 0x487) == '\x01') && (**(char **)(param_2 + 0x478) != '\f')) {
    FUN_18000af90(*(undefined8 *)(param_2 + 0x478));
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x18);
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x18);
  }
  if ((lVar5 != 0) && ((bVar2 & 1) != 0)) {
    lVar6 = *(longlong *)(param_2 + 0x478);
    (**(code **)(lVar5 + 0x20))
              (*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(lVar6 + 0x20),
               *(undefined8 *)(lVar6 + 0x28));
  }
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x38);
  if ((lVar5 != 0) && ((bVar1 & 1) != 0)) {
    lVar6 = *(longlong *)(param_2 + 0x478);
    (**(code **)(lVar5 + 0x20))
              (*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x40),
               *(undefined8 *)(lVar6 + 0x48));
  }
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x58);
  if ((lVar5 != 0) && ((bVar3 & 1) != 0)) {
    lVar6 = *(longlong *)(param_2 + 0x478);
    (**(code **)(lVar5 + 0x20))
              (*(undefined8 *)(lVar6 + 0x70),*(undefined8 *)(lVar6 + 0x60),
               *(undefined8 *)(lVar6 + 0x68));
  }
  if (((bVar4 & 1) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x78), lVar5 != 0)) {
    lVar6 = *(longlong *)(param_2 + 0x478);
    (**(code **)(lVar5 + 0x20))
              (*(undefined8 *)(lVar6 + 0x90),*(undefined8 *)(lVar6 + 0x80),
               *(undefined8 *)(lVar6 + 0x88));
  }
  return;
}


