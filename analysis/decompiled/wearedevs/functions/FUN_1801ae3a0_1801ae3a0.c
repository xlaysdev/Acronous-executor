/* FUN_1801ae3a0 @ 1801ae3a0 */

longlong FUN_1801ae3a0(char *param_1,char *param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*param_1 == '\x01') {
    cVar5 = *param_2;
    if (cVar5 == '\x01') {
      if (param_1[1] == '\0') {
        if (param_2[1] == '\0') {
          return 1;
        }
        return 0;
      }
      if (param_2[1] == '\0') {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (*param_1 != '\x02') goto LAB_1801ae453;
    cVar5 = *param_2;
    if (cVar5 == '\x02') {
      lVar6 = *(longlong *)(param_1 + 8);
      lVar4 = *(longlong *)(lVar6 + 0x10);
      if (lVar4 != *(longlong *)(*(longlong *)(param_2 + 8) + 0x10)) {
        return 0;
      }
      plVar1 = (longlong *)(lVar6 + 8);
      lVar7 = 0;
      do {
        lVar6 = CONCAT71((int7)((ulonglong)lVar6 >> 8),lVar4 == lVar7);
        if (lVar4 == lVar7) {
          return lVar6;
        }
        bVar2 = *(byte *)(*plVar1 + lVar7);
        bVar3 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + lVar7);
        lVar7 = lVar7 + 1;
      } while ((byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2) ==
               (byte)(((byte)(bVar3 + 0xbf) < 0x1a) << 5 | bVar3));
      return lVar6;
    }
  }
  if (cVar5 != '\0') {
    return 0;
  }
LAB_1801ae453:
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("internal error: entered unreachable code",0x28,
                &PTR_s_C__Users_burne__cargo_registry_s_180284418);
}


