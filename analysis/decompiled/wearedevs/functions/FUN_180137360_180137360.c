/* FUN_180137360 @ 180137360 */

undefined8 FUN_180137360(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong local_48;
  char ***pppcStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  char **local_28;
  undefined *local_20;
  char *local_18;
  undefined8 local_10;
  
  local_38 = 0;
  puStack_30 = (undefined *)0x0;
  local_48 = 0;
  pppcStack_40 = (char ***)0x14;
  cVar1 = FUN_18015f010(0,&local_48);
  if (cVar1 == '\0') {
    local_38 = 0;
    puStack_30 = (undefined *)0x0;
    local_48 = 0;
    pppcStack_40 = (char ***)0x45;
    cVar1 = FUN_18015f010(param_1,&local_48);
    if (cVar1 == '\0') {
      local_38 = 0;
      puStack_30 = (undefined *)0x0;
      local_48 = 0;
      pppcStack_40 = (char ***)0x47;
      cVar1 = FUN_18015f010(param_1,&local_48);
      if (((cVar1 == '\0') &&
          (FUN_1801540d0(&local_48,"keep-alive",10,param_1), (local_48 & 1) == 0)) &&
         (FUN_1801540d0(&local_48,"proxy-connection",0x10,param_1), (local_48 & 1) == 0)) {
        local_38 = 0;
        puStack_30 = (undefined *)0x0;
        local_48 = 0;
        pppcStack_40 = (char ***)0x43;
        lVar2 = FUN_18015f500(param_1,&local_48);
        if (lVar2 == 0) {
          return 0xd;
        }
        if ((*(longlong *)(lVar2 + 0x10) == 8) && (**(longlong **)(lVar2 + 8) == 0x7372656c69617274)
           ) {
          return 0xd;
        }
        if (1 < *(ulonglong *)PTR_DAT_1802fd448) {
          return 6;
        }
        if (1 < DAT_1802fc3a0 - 1) {
          if (DAT_1802fc3a0 == 0) {
            return 6;
          }
          cVar1 = FUN_1801faaf0(&PTR_DAT_1802fc390);
          if (cVar1 == '\0') {
            return 6;
          }
        }
        cVar1 = FUN_1801601d0(PTR_DAT_1802fc390);
        if (cVar1 == '\0') {
          return 6;
        }
        puVar3 = PTR_DAT_1802fc390;
        goto LAB_180137513;
      }
    }
  }
  if (1 < *(ulonglong *)PTR_DAT_1802fd448) {
    return 6;
  }
  if (1 < DAT_1802fc388 - 1) {
    if (DAT_1802fc388 == 0) {
      return 6;
    }
    cVar1 = FUN_1801faaf0(&PTR_DAT_1802fc378);
    if (cVar1 == '\0') {
      return 6;
    }
  }
  cVar1 = FUN_1801601d0(PTR_DAT_1802fc378);
  if (cVar1 == '\0') {
    return 6;
  }
  puVar3 = PTR_DAT_1802fc378;
LAB_180137513:
  puStack_30 = puVar3 + 0x30;
  local_18 = 
  "illegal connection-specific headers foundevent C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\streams\\send.rs:337"
  ;
  local_10 = 0x53;
  local_28 = &local_18;
  local_20 = &DAT_18024c458;
  local_48 = 1;
  pppcStack_40 = &local_28;
  local_38 = 1;
  FUN_180160ae0(puVar3,&local_48);
  return 6;
}


