/* execute @ 18002a3e0 */

void execute(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
                    /* 0x2a3e0  3  execute */
  local_18 = 0xfffffffffffffffe;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    FUN_1801ee010(local_30,param_1,sVar1 + 1);
    uVar3 = 0;
    if (local_30[0] == '\0') {
      uVar3 = local_20;
    }
    uVar2 = 1;
    if (local_30[0] == '\0') {
      uVar2 = local_28;
    }
    FUN_180036130(uVar2,uVar3);
  }
  return;
}


