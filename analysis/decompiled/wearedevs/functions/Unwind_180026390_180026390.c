/* Unwind@180026390 @ 180026390 */

void Unwind_180026390(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(ulonglong *)(param_2 + 0x120) <= *(ulonglong *)(param_2 + 0x188)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x178) + 0x20);
    *(undefined1 *)(param_2 + 0x1a7) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x180),*(undefined8 *)(param_2 + 0x168),
              *(undefined8 *)(param_2 + 0x198));
  }
  *(undefined1 *)(param_2 + 0x1a7) = 0;
  return;
}


