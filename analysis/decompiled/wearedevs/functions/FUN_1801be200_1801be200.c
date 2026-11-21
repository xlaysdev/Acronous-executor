/* FUN_1801be200 @ 1801be200 */

undefined8 FUN_1801be200(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    if (param_4 * 8 == lVar2) break;
    lVar1 = lVar2 + 8;
  } while (*(longlong *)(param_3 + lVar2) != param_2);
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),param_4 * 8 != lVar2);
}


