/* FUN_18014f8d0 @ 18014f8d0 */

undefined1 * FUN_18014f8d0(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVar3 = (int)((ulonglong)param_2 >> 0x20);
  switch((uint)param_2 & 3) {
  case 0:
    uVar1 = *(undefined1 *)(param_2 + 0x10);
    break;
  case 1:
    uVar1 = *(undefined1 *)(param_2 + 0xf);
    local_58 = 0;
    local_50 = 1;
    uStack_48 = 0;
    local_60 = 0x60000020;
    local_70 = &local_58;
    local_68 = &PTR_LAB_1802557a0;
    local_30 = (undefined8 *)param_2;
    cVar2 = (**(code **)(*(longlong *)(param_2 + 7) + 0x20))
                      (*(undefined8 *)(param_2 + -1),&local_70);
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("a Display implementation returned an error unexpectedly",0x37,&local_21,
                    &DAT_180255890,&PTR_s_C__Users_burne__rustup_toolchain_180255878);
    }
    local_40 = (longlong)local_30 + -1;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)local_50;
    *(undefined4 *)(param_1 + 0x14) = local_50._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_48;
    *(undefined4 *)(param_1 + 0x1c) = uStack_48._4_4_;
    param_1[1] = uVar1;
    *(undefined8 *)(param_1 + 8) = local_58;
    *param_1 = 2;
    local_38 = *(undefined8 *)((longlong)local_30 + -1);
    local_30 = *(undefined8 **)((longlong)local_30 + 7);
    if ((code *)*local_30 != (code *)0x0) {
      (*(code *)*local_30)(local_38);
    }
    if (local_30[1] != 0) {
      thunk_FUN_1801d3330(local_38,local_30[1],local_30[2]);
    }
    thunk_FUN_1801d3330(local_40,0x18,8);
    return param_1;
  case 2:
    uVar1 = 1;
    if (iVar3 < 0x461) {
      if (iVar3 < 0x150) {
        switch(iVar3) {
        case 2:
        case 3:
        case 0xf:
        case 0x35:
        case 0x43:
          uVar1 = 0;
          break;
        default:
          goto switchD_18014f946_caseD_4;
        case 5:
          break;
        case 8:
        case 0xe:
          uVar1 = 0x26;
          break;
        case 0x11:
          uVar1 = 0x1f;
          break;
        case 0x13:
          uVar1 = 0x11;
          break;
        case 0x27:
        case 0x70:
          uVar1 = 0x18;
          break;
        case 0x50:
        case 0xb7:
          uVar1 = 0xc;
          break;
        case 0x57:
          goto switchD_18014f946_caseD_57;
        case 0x6d:
        case 0xe8:
          uVar1 = 0xb;
          break;
        case 0x78:
          uVar1 = 0x24;
          break;
        case 0x79:
        case 0x102:
          goto switchD_18014f946_caseD_79;
        case 0x7b:
        case 0xa1:
        case 0xce:
          uVar1 = 0x21;
          break;
        case 0x84:
          uVar1 = 0x19;
          break;
        case 0x91:
          uVar1 = 0x10;
          break;
        case 0xaa:
          uVar1 = 0x1c;
          break;
        case 0xdf:
          uVar1 = 0x1b;
          break;
        case 0x10b:
          uVar1 = 0xe;
        }
        break;
      }
      if (iVar3 < 0x3e3) {
        if (iVar3 == 0x150) {
          uVar1 = 0xf;
          break;
        }
        if (iVar3 == 0x252) goto switchD_18014f946_caseD_79;
      }
      else if ((iVar3 == 0x3e3) || (iVar3 == 0x41d)) goto switchD_18014f946_caseD_79;
      goto switchD_18014f946_caseD_4;
    }
    if (iVar3 < 0x271d) {
      if (iVar3 < 0x781) {
        if (iVar3 < 0x4cf) {
          if (iVar3 == 0x461) goto switchD_18014f946_caseD_79;
          if (iVar3 == 0x46b) {
            uVar1 = 0x1e;
            break;
          }
          if (iVar3 == 0x476) {
            uVar1 = 0x20;
            break;
          }
        }
        else if (iVar3 < 0x50f) {
          if (iVar3 == 0x4cf) goto switchD_18014fa49_caseD_2743;
          if (iVar3 == 0x4d0) goto switchD_18014fa49_caseD_2751;
        }
        else {
          if (iVar3 == 0x50f) goto switchD_18014fa49_caseD_2755;
          if (iVar3 == 0x5b4) goto switchD_18014f946_caseD_79;
        }
      }
      else if (iVar3 < 0x1b80) {
        if (iVar3 == 0x781) {
          uVar1 = 0x12;
          break;
        }
        if ((iVar3 == 0x1716) || (iVar3 == 0x1b64)) goto switchD_18014f946_caseD_79;
      }
      else if (iVar3 < 0x2022) {
        if ((iVar3 == 0x1b80) || (iVar3 == 0x1f4e)) goto switchD_18014f946_caseD_79;
      }
      else if ((iVar3 == 0x2022) || (iVar3 == 0x25e9)) goto switchD_18014f946_caseD_79;
      goto switchD_18014f946_caseD_4;
    }
    switch(iVar3) {
    case 0x271d:
      break;
    case 0x2726:
switchD_18014f946_caseD_57:
      uVar1 = 0x14;
      break;
    case 0x2733:
      uVar1 = 0xd;
      break;
    case 0x2740:
      uVar1 = 8;
      break;
    case 0x2741:
      uVar1 = 9;
      break;
    case 0x2742:
      uVar1 = 10;
      break;
    case 0x2743:
switchD_18014fa49_caseD_2743:
      uVar1 = 5;
      break;
    case 0x2745:
      uVar1 = 6;
      break;
    case 0x2746:
      uVar1 = 3;
      break;
    case 0x2749:
      uVar1 = 7;
      break;
    case 0x274c:
switchD_18014f946_caseD_79:
      uVar1 = 0x16;
      break;
    case 0x274d:
      uVar1 = 2;
      break;
    case 0x2751:
switchD_18014fa49_caseD_2751:
      uVar1 = 4;
      break;
    case 0x2755:
switchD_18014fa49_caseD_2755:
      uVar1 = 0x1a;
      break;
    default:
      if ((iVar3 - 0x3c2aU < 2) || (iVar3 == 0x35ed)) goto switchD_18014f946_caseD_79;
    case 0x271e:
    case 0x271f:
    case 0x2720:
    case 0x2721:
    case 0x2722:
    case 0x2723:
    case 0x2724:
    case 0x2725:
    case 0x2727:
    case 0x2728:
    case 0x2729:
    case 0x272a:
    case 0x272b:
    case 0x272c:
    case 0x272d:
    case 0x272e:
    case 0x272f:
    case 0x2730:
    case 0x2731:
    case 0x2732:
    case 0x2734:
    case 0x2735:
    case 0x2736:
    case 0x2737:
    case 0x2738:
    case 0x2739:
    case 0x273a:
    case 0x273b:
    case 0x273c:
    case 0x273d:
    case 0x273e:
    case 0x273f:
    case 0x2744:
    case 0x2747:
    case 0x2748:
    case 0x274a:
    case 0x274b:
    case 0x274e:
    case 0x274f:
    case 0x2750:
    case 0x2752:
    case 0x2753:
    case 0x2754:
switchD_18014f946_caseD_4:
      uVar1 = 0x29;
    }
    break;
  case 3:
    uVar1 = (undefined1)((ulonglong)param_2 >> 0x20);
  }
  param_1[1] = uVar1;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  *param_1 = 2;
  return param_1;
}


