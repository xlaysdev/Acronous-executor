/* FUN_1800f93d0 @ 1800f93d0 */

ulonglong FUN_1800f93d0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
LAB_1800f93ef:
  do {
    uVar4 = param_2 - uVar5;
    pbVar1 = (byte *)(param_1 + uVar5);
    uVar6 = -(int)pbVar1 & 7;
    uVar7 = (ulonglong)uVar6;
    if (uVar4 < uVar7 + 0x10) {
      uVar7 = 0;
joined_r0x0001800f94e3:
      while( true ) {
        if (uVar4 <= uVar7) {
          return param_2;
        }
        bVar3 = pbVar1[uVar7];
        if ((char)bVar3 < '\0') break;
        uVar7 = uVar7 + 1;
      }
    }
    else {
      if (uVar7 == 0) {
LAB_1800f94b0:
LAB_1800f94c0:
        uVar2 = *(ulonglong *)(pbVar1 + uVar7) & 0x8080808080808080;
        uVar8 = *(ulonglong *)(pbVar1 + uVar7 + 8) & 0x8080808080808080;
        if (uVar8 == 0 && uVar2 == 0) break;
        if (uVar2 == 0) {
          uVar6 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            uVar6 = uVar6 + 1;
          }
          uVar4 = (ulonglong)(uVar6 >> 3) + 8;
        }
        else {
          uVar6 = 0;
          for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000000000000000) {
            uVar6 = uVar6 + 1;
          }
          uVar4 = (ulonglong)(uVar6 >> 3);
        }
        uVar7 = uVar7 + uVar4;
        bVar3 = pbVar1[uVar7];
        goto LAB_1800f9534;
      }
      bVar3 = *pbVar1;
      if ((char)bVar3 < '\0') {
        uVar7 = 0;
      }
      else {
        if (uVar6 == 1) goto LAB_1800f94b0;
        bVar3 = pbVar1[1];
        if ((char)bVar3 < '\0') {
          uVar7 = 1;
        }
        else {
          if (uVar6 == 2) goto LAB_1800f94b0;
          bVar3 = pbVar1[2];
          if ((char)bVar3 < '\0') {
            uVar7 = 2;
          }
          else {
            if (uVar6 == 3) goto LAB_1800f94b0;
            bVar3 = pbVar1[3];
            if ((char)bVar3 < '\0') {
              uVar7 = 3;
            }
            else {
              if (uVar6 == 4) goto LAB_1800f94b0;
              bVar3 = pbVar1[4];
              if ((char)bVar3 < '\0') {
                uVar7 = 4;
              }
              else {
                if (uVar6 == 5) goto LAB_1800f94b0;
                bVar3 = pbVar1[5];
                if ((char)bVar3 < '\0') {
                  uVar7 = 5;
                }
                else {
                  if ((uVar6 == 6) || (bVar3 = pbVar1[6], -1 < (char)bVar3)) goto LAB_1800f94b0;
                  uVar7 = 6;
                }
              }
            }
          }
        }
      }
    }
LAB_1800f9534:
    uVar4 = uVar7 + uVar5;
    if (param_2 < uVar5 + uVar7 + 4) {
joined_r0x0001800f96d3:
      do {
        while( true ) {
          uVar5 = uVar4;
          if (param_2 <= uVar5) {
            return uVar5;
          }
          bVar3 = *(byte *)(param_1 + uVar5);
          if ((char)bVar3 < '\0') break;
          uVar4 = uVar5 + 1;
        }
        if (0x1d < (byte)(bVar3 + 0x3e)) {
          if (0xef < bVar3) {
            return uVar5;
          }
          if (param_2 < uVar5 + 3) {
            return uVar5;
          }
          if ((byte)(*(byte *)(param_1 + 2 + uVar5) >> 6 |
                    (&DAT_18021a100)[bVar3] & (&DAT_18021a080)[*(byte *)(param_1 + 1 + uVar5)]) == 2
             ) {
            return uVar5 + 3;
          }
          return uVar5;
        }
        if (param_2 < uVar5 + 2) {
          return uVar5;
        }
        uVar4 = uVar5 + 2;
      } while (*(char *)(param_1 + 1 + uVar5) < -0x40);
      return uVar5;
    }
    do {
      while( true ) {
        while (uVar5 = uVar4, (byte)(bVar3 + 0x3e) < 0x1e) {
          if (-0x41 < *(char *)(uVar5 + 1 + param_1)) {
            return uVar5;
          }
          uVar4 = uVar5 + 2;
          if (param_2 < uVar5 + 6) goto joined_r0x0001800f96d3;
          bVar3 = *(byte *)(param_1 + uVar4);
          if (-1 < (char)bVar3) {
            uVar5 = uVar5 + 3;
            if (uVar5 <= param_2) goto LAB_1800f93ef;
            goto LAB_1800f9758;
          }
        }
        if (bVar3 < 0xf0) break;
        if ((uint)(byte)(*(byte *)(uVar5 + 2 + param_1) >> 6 |
                        (&DAT_18021a100)[bVar3] & (&DAT_18021a080)[*(byte *)(uVar5 + 1 + param_1)])
            + (*(byte *)(uVar5 + 3 + param_1) & 0xffffffc0) * 4 != 0x202) {
          return uVar5;
        }
        uVar4 = uVar5 + 4;
        if (param_2 < uVar5 + 8) goto joined_r0x0001800f96d3;
        bVar3 = *(byte *)(param_1 + uVar4);
        if (-1 < (char)bVar3) {
          uVar5 = uVar5 + 5;
          goto joined_r0x0001800f9690;
        }
      }
      do {
        uVar7 = uVar5;
        if ((byte)(*(byte *)(param_1 + 2 + uVar7) >> 6 |
                  (&DAT_18021a100)[bVar3] & (&DAT_18021a080)[*(byte *)(param_1 + 1 + uVar7)]) != 2)
        {
          return uVar7;
        }
        if (param_2 < uVar7 + 7) {
          uVar4 = uVar7 + 3;
          goto joined_r0x0001800f96d3;
        }
        bVar3 = *(byte *)(param_1 + 3 + uVar7);
        uVar5 = uVar7 + 3;
      } while ((bVar3 & 0xf0) == 0xe0);
      uVar4 = uVar7 + 3;
    } while ((char)bVar3 < '\0');
    uVar5 = uVar7 + 4;
joined_r0x0001800f9690:
    if (param_2 < uVar5) {
LAB_1800f9758:
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar5,param_2,param_2,&PTR_s_C__Users_burne__cargo_registry_s_18021a040);
    }
  } while( true );
  uVar7 = uVar7 + 0x10;
  if (uVar4 - 0x10 < uVar7) goto joined_r0x0001800f94e3;
  goto LAB_1800f94c0;
}


