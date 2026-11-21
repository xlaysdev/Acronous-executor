/* Unwind@180185ec0 @ 180185ec0 */

void Unwind_180185ec0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0x87);
  if (*(char *)(param_2 + 0x86) != '\0') {
    FUN_18016e850(param_2 + 0x50);
  }
  if ((bVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    FUN_180181ad0(uVar2);
    thunk_FUN_1801d3330(uVar2,0x78,8);
  }
  return;
}


