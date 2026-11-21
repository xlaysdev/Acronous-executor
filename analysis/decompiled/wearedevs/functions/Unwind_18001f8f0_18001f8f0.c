/* Unwind@18001f8f0 @ 18001f8f0 */

void Unwind_18001f8f0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_2 + 0x730);
  uVar2 = *(undefined8 *)(param_2 + 0x738);
  if (*piVar1 == 3) {
    FUN_180018170(piVar1);
    *(undefined8 *)(param_2 + 0x708) = uVar2;
    *(int **)(param_2 + 0x700) = piVar1;
    return;
  }
  *(undefined8 *)(param_2 + 0x708) = uVar2;
  *(int **)(param_2 + 0x700) = piVar1;
  return;
}


