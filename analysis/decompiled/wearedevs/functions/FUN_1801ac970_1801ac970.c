/* FUN_1801ac970 @ 1801ac970 */

char * FUN_1801ac970(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_30;
  char local_28 [8];
  longlong local_20;
  
  local_70 = (char *)0x0;
  local_50 = 0;
  local_40 = 0x4000000040;
  local_38 = 1;
  local_30 = 1;
  local_68 = param_2;
  local_60 = param_1;
  local_58 = param_2;
  local_48 = param_2;
  pcVar1 = (char *)FUN_1801ac8e0(&local_70);
  if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60(&DAT_1802838f8,0x20,&PTR_s_C__Users_burne__cargo_registry_s_180283918);
  }
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(0,0,&PTR_s_C__Users_burne__cargo_registry_s_180283930);
  }
  local_68 = param_2;
  local_58 = param_2;
  if (*pcVar1 == '[') {
    local_60 = (char *)0x0;
    local_48 = (char *)CONCAT71(local_48._1_7_,1);
    local_50 = 0x5d0000005d;
    local_70 = pcVar1;
    FUN_1801ad010(local_28,&local_70);
    if (local_28[0] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60(&DAT_180283960,0x20,&PTR_s_C__Users_burne__cargo_registry_s_180283980);
    }
    pcVar2 = (char *)(local_20 + 1);
    if (pcVar2 != (char *)0x0) {
      if (pcVar2 < param_2) {
        if (pcVar1[(longlong)pcVar2] < -0x40) {
LAB_1801acb4d:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pcVar1,param_2,0,pcVar2,&PTR_s_C__Users_burne__cargo_registry_s_180283998);
        }
      }
      else if (pcVar2 != param_2) goto LAB_1801acb4d;
    }
  }
  else {
    local_70 = (char *)0x0;
    local_50 = 0;
    local_40 = 0x3a0000003a;
    local_38 = 1;
    local_30 = 1;
    local_60 = pcVar1;
    local_48 = param_2;
    FUN_1801ad010(local_28,&local_60);
    if (local_28[0] == '\0') {
      if ((local_30._1_1_ != '\0') || ((local_68 != local_70 | (byte)local_30) != 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60(&DAT_1802838f8,0x20,&PTR_s_C__Users_burne__cargo_registry_s_180283948);
      }
      pcVar1 = local_60 + (longlong)local_70;
    }
    else {
      pcVar1 = pcVar1 + (longlong)local_70;
    }
  }
  return pcVar1;
}


