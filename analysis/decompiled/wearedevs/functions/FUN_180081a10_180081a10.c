/* FUN_180081a10 @ 180081a10 */

/* WARNING: Removing unreachable block (ram,0x000180081a34) */

void FUN_180081a10(uint *param_1,longlong *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char local_38 [8];
  undefined **local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*param_1 < 2) {
    return;
  }
  if (*param_2 == 0) {
    (**(code **)(param_2[2] + 0x28))(local_38,param_2[1]);
    ppuVar1 = local_30;
    ppuVar2 = local_28;
    if (local_38[0] != '\0') goto LAB_180081a6e;
  }
  else {
    ppuVar1 = (undefined **)param_2[2];
    ppuVar2 = (undefined **)param_2[2];
LAB_180081a6e:
    if (ppuVar1 == (undefined **)0x0 && ppuVar2 == (undefined **)0x0) {
      local_20 = 0;
      uStack_18 = 0;
      local_30 = &PTR_LAB_18020de18;
      local_28 = (undefined **)0x1;
      goto LAB_180081aba;
    }
  }
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_2)(&local_30,param_2 + 3,param_2[1],param_2[2]);
LAB_180081aba:
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined ***)(param_1 + 2) = local_30;
  *(undefined ***)(param_1 + 4) = local_28;
  *(undefined8 *)(param_1 + 6) = local_20;
  *(undefined8 *)(param_1 + 8) = uStack_18;
  return;
}


