/* FUN_1801e0c70 @ 1801e0c70 */

void FUN_1801e0c70(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_1801e1204(&local_18,&DAT_1802906d8,*(undefined8 *)(param_1 + 4),1,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


