/* FUN_1800b9a30 @ 1800b9a30 */

void FUN_1800b9a30(ulonglong *param_1)

{
  if ((*param_1 & 0x7fffffffffffffff) == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[1],*param_1,1);
  return;
}


