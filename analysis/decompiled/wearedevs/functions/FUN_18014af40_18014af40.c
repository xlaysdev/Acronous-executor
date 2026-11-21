/* FUN_18014af40 @ 18014af40 */

void FUN_18014af40(longlong *param_1)

{
  if (*param_1 - 2U < 2) {
    return;
  }
  if ((uint)*param_1 < 2) {
    FUN_18014b170(param_1 + 2);
    return;
  }
  FUN_18014b170(param_1 + 1);
  return;
}


