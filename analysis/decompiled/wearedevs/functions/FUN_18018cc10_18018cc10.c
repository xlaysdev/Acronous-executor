/* FUN_18018cc10 @ 18018cc10 */

void FUN_18018cc10(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  undefined1 local_48 [16];
  char *local_38;
  char *local_30;
  uint local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  pcVar3 = (char *)*param_1;
  FUN_1801ef980(local_48,param_2,"Mutex",5);
  LOCK();
  cVar2 = *pcVar3;
  if (cVar2 == '\0') {
    *pcVar3 = '\x01';
  }
  puVar1 = PTR_DAT_1802fd600;
  UNLOCK();
  if (cVar2 == '\0') {
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_180200a50();
      local_24 = local_24 ^ 1;
    }
    local_38 = pcVar3 + 8;
    local_30 = pcVar3;
    if (pcVar3[1] == '\0') {
      FUN_1801ef590(local_48,"data<locked>",4,&local_38,&DAT_1802664b0);
    }
    else {
      FUN_1801ef590(local_48,"data<locked>",4,&local_38,&DAT_1802664b0);
    }
    if ((((char)local_24 == '\0') && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
       (cVar2 = FUN_180200a50(), cVar2 == '\0')) {
      local_30[1] = '\x01';
    }
    pcVar3 = local_30;
    LOCK();
    cVar2 = *local_30;
    *local_30 = '\0';
    UNLOCK();
    if (cVar2 == '\x02') {
      WakeByAddressSingle(local_30);
    }
  }
  else {
    FUN_1801ef590(local_48,"data<locked>",4,&DAT_1802664e0,&DAT_1802664f0);
  }
  local_38 = (char *)CONCAT71(local_38._1_7_,pcVar3[1] != '\0');
  FUN_1801ef590(local_48,
                "poisonedC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\mio-1.2.2\\src\\sys\\windows\\selector.rs"
                ,8,&local_38,&DAT_180266488);
  FUN_1801ef4e0(local_48);
  return;
}


