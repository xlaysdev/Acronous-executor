/* Unwind@18005c540 @ 18005c540 */

void Unwind_18005c540(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_2 + 0x2d8);
  switch(*puVar2) {
  case 0:
    if ((*(byte *)(param_2 + 0x3a0) & 1) != 0) {
      FUN_180065b40(puVar2 + 8);
    }
    break;
  case 1:
    bVar1 = *(byte *)(param_2 + 0x3a1);
    goto joined_r0x00018005c599;
  case 3:
    bVar1 = *(byte *)(param_2 + 0x3a2);
joined_r0x00018005c599:
    if ((bVar1 & 1) != 0) {
      FUN_180066570(puVar2 + 8);
    }
    break;
  case 6:
    if ((*(byte *)(param_2 + 0x3a3) & 1) != 0) {
      (**(code **)(*(longlong *)(puVar2 + 8) + 0x20))
                (*(undefined8 *)(puVar2 + 0x20),*(undefined8 *)(puVar2 + 0x10),
                 *(undefined8 *)(puVar2 + 0x18));
    }
  }
  return;
}


