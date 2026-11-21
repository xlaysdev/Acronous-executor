/* FUN_180077a00 @ 180077a00 */

void FUN_180077a00(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    param_2 = 1 - param_2;
    do {
      if (*param_1 < 3) {
        lVar1 = 0x18;
        lVar3 = 0x10;
        lVar2 = 0x20;
        lVar4 = 8;
LAB_180077a45:
        (**(code **)(*(longlong *)((longlong)param_1 + lVar4) + 0x20))
                  (*(undefined8 *)((longlong)param_1 + lVar2),
                   *(undefined8 *)((longlong)param_1 + lVar3),
                   *(undefined8 *)((longlong)param_1 + lVar1));
      }
      else if ((int)*param_1 != 3) {
        lVar1 = 0x28;
        lVar3 = 0x20;
        lVar2 = 0x30;
        lVar4 = 0x18;
        goto LAB_180077a45;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 10;
    } while (param_2 != 1);
  }
  return;
}


