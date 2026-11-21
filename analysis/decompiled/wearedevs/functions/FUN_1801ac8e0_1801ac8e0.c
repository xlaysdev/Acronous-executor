/* FUN_1801ac8e0 @ 1801ac8e0 */

longlong FUN_1801ac8e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char local_28 [8];
  longlong local_20;
  longlong local_18;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    return 0;
  }
  if ((char)param_1[8] == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    lVar1 = FUN_1801ac8e0(param_1);
    if (param_2 != 0 && lVar1 != 0) {
      return lVar1;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0;
    }
  }
  lVar1 = param_1[2];
  FUN_1801ad1d0(local_28,param_1 + 2);
  if (local_28[0] == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    local_18 = *param_1;
  }
  else {
    param_1[1] = local_20;
  }
  return lVar1 + local_18;
}


