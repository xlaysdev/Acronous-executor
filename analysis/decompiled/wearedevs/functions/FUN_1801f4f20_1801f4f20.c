/* FUN_1801f4f20 @ 1801f4f20 */

undefined8 FUN_1801f4f20(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  pcVar1 = (char *)param_1[2];
  uVar4 = *param_1;
  lVar2 = param_1[1];
  if (*pcVar1 != '\0') {
    cVar3 = (**(code **)(lVar2 + 0x18))(uVar4,&DAT_180294788,4);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  *pcVar1 = param_2 == 10;
                    /* WARNING: Could not recover jumptable at 0x0001801f4f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar2 + 0x20))(uVar4);
  return uVar4;
}


