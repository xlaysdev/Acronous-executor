/* Unwind@18008c380 @ 18008c380 */

void Unwind_18008c380(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 0x558);
  uVar2 = puVar1[1];
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    memset((void *)*puVar1,CONCAT31((int3)((ulonglong)param_2 >> 8),0xff),uVar2 + 0x11);
    uVar3 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
    if (uVar2 < 8) {
      uVar3 = uVar2;
    }
  }
  puVar1[3] = 0;
  puVar1[2] = uVar3;
  *(undefined1 *)(param_2 + 0x56f) = 1;
  return;
}


