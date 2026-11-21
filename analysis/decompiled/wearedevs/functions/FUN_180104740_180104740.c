/* FUN_180104740 @ 180104740 */

undefined8 * FUN_180104740(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong local_28 [2];
  short local_18;
  
  FUN_1801ac510(local_28);
  if (local_28[0] == 0) {
LAB_1801047d6:
    FUN_1801ac510(param_1,param_2);
  }
  else {
    if (*param_2 == '\0') {
LAB_1801047a8:
      if (local_18 != 0x50) goto LAB_1801047d6;
    }
    else {
      if (*param_2 != '\x01') {
        pcVar2 = *(char **)(*(longlong *)(param_2 + 8) + 8);
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
        if (lVar1 == 3) {
          if (*(char *)((longlong)pcVar2 + 2) == 's' && (short)*(int *)pcVar2 == 0x7377)
          goto LAB_1801047cc;
        }
        else if (lVar1 == 5) goto LAB_180104796;
        goto LAB_1801047a8;
      }
      if (param_2[1] == '\0') goto LAB_1801047a8;
      pcVar2 = "http";
LAB_180104796:
      if ((char)*(int *)((longlong)pcVar2 + 4) != 's' || *(int *)pcVar2 != 0x70747468)
      goto LAB_1801047a8;
LAB_1801047cc:
      if (local_18 != 0x1bb) goto LAB_1801047d6;
    }
    *param_1 = 0;
  }
  return param_1;
}


