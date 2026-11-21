/* FUN_1800aa290 @ 1800aa290 */

void * FUN_1800aa290(void *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined1 local_270 [256];
  longlong local_170;
  undefined2 local_158;
  undefined1 local_156;
  char local_3a;
  char local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = FUN_18016c6f0();
  if (*(char *)(lVar2 + 0x48) == '\x01') {
LAB_1800aa2f0:
    cVar3 = *(char *)(lVar2 + 0x44);
    cVar4 = *(char *)(lVar2 + 0x45);
    cVar1 = cVar4;
    if (cVar3 == '\x01') {
      if (cVar4 == '\0') {
        FUN_18016e580(param_3);
        local_156 = 0;
        local_158 = 0;
        FUN_18016e8a0((longlong)&local_158 + 1);
        *(undefined8 *)((longlong)param_1 + 0x100) = 4;
        return param_1;
      }
      cVar1 = cVar4 + -1;
    }
    *(char *)(lVar2 + 0x45) = cVar1;
    local_156 = 0;
    local_158 = 0;
    FUN_18016e8a0((longlong)&local_158 + 1);
  }
  else {
    if (*(char *)(lVar2 + 0x48) != '\x02') {
      FUN_1801d8880(lVar2,FUN_1800754a0);
      *(undefined1 *)(lVar2 + 0x48) = 1;
      goto LAB_1800aa2f0;
    }
    cVar3 = '\0';
    cVar4 = '\0';
  }
  lVar2 = *param_2;
  local_3a = cVar3;
  local_39 = cVar4;
  FUN_18009c180(local_270,lVar2 + 0x1a0,lVar2 + 0x80);
  if (local_170 != 3) {
    if ((int)local_170 != 4) {
      memcpy(&local_158,local_270,0x118);
      FUN_180177220(lVar2 + 0x1c0);
LAB_1800aa423:
      local_3a = '\0';
      memcpy(param_1,local_270,0x118);
      goto LAB_1800aa43c;
    }
    FUN_18017a1b0(lVar2 + 0x100,*param_3);
    FUN_18009c180(local_270,lVar2 + 0x1a0,lVar2 + 0x80);
    if (local_170 != 3) {
      if ((int)local_170 != 4) {
        memcpy(&local_158,local_270,0x118);
        FUN_180177220(lVar2 + 0x1c0);
        goto LAB_1800aa423;
      }
      if ((*(char *)(lVar2 + 0x1b8) == '\0') ||
         (cVar1 = FUN_180177240(lVar2 + 0x1c0), cVar1 == '\0')) {
        *(undefined8 *)((longlong)param_1 + 0x100) = 4;
        goto LAB_1800aa43c;
      }
    }
  }
  local_3a = '\0';
  *(undefined8 *)((longlong)param_1 + 0x100) = 3;
LAB_1800aa43c:
  FUN_18016e8a0(&local_3a);
  return param_1;
}


