/* FUN_18015fd20 @ 18015fd20 */

undefined1 FUN_18015fd20(longlong *param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[1];
  if ((ulonglong)((longlong *)*param_1)[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&DAT_18025f1c0);
  }
  uVar1 = *(undefined1 *)(*(longlong *)*param_1 + uVar2);
  param_1[1] = uVar2 + 1;
  return uVar1;
}


