/* Unwind@180006910 @ 180006910 */

void Unwind_180006910(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_2 + 0x730);
  uVar2 = *(undefined8 *)(param_2 + 0x738);
  if (*piVar1 == 3) {
    FUN_18000a660(piVar1);
    *(undefined8 *)(param_2 + 0x708) = uVar2;
    *(int **)(param_2 + 0x700) = piVar1;
    return;
  }
  *(undefined8 *)(param_2 + 0x708) = uVar2;
  *(int **)(param_2 + 0x700) = piVar1;
  return;
}


