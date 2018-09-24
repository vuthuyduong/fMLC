#pragma once
#ifndef __AFXWIN_H__
#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

// OptionDlg dialog

class OptionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(OptionDlg)

public:
	OptionDlg(CWnd* pParent = NULL);   // standard constructor
	OptionDlg(int32_t p_MinOverlap = 100, int32_t p_MaxNoForSingLevelClustering = 100, double p_MinSimForVisualization = 0.5, int32_t p_KneighborNo = 150,  int32_t p_VisDimension = 3, int32_t p_SimMatType=0, int32_t p_ResFormat =0, CWnd* pParent = NULL);
	virtual ~OptionDlg();
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OPTION_DIALOG };
#endif

protected:
	HICON m_hIcon;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support																
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	int32_t m_MinOverlap = 100;
	int32_t m_MinSeqNoForMLC = 100;
	double m_MinSimForVisualization = 0.5;
	int32_t m_KneighborNo = 150;
	int32_t m_VisDimension = 3;//2:2D;3:3D
	int32_t m_SimMatType = 0; //0: complete; 1: sparse
	int32_t m_ResFormat = 0; //0: tab format; 1: fasta file;2: fasta folder


	//Paramters for DNA comparison
	// The minimum overlap
	CEdit EF_MinimumOverlap;
	// The min. number of sequences for MLC
	//Parameters for MLC
	CEdit EF_MinNoForMLC;
	//Parameters to save Similarity matrix
	// The minimum similarity to be saved
	CEdit EF_MinSimForVisualization;
	// The similarity matrix type
	CComboBox CO_SimMatType; // sparse similarity matrix or complete similarity matrix
	// The similarity matrix format
	CComboBox CO_SimMatFormat; //format: vertical and horizontal, for visualization, please use vertical type
	//Parameters for LargeVis
	// The dimension for visualization
	CComboBox CO_VisDimension;
	// Kneighbor
	CEdit EF_Kneighbor;
	//Parameters to save clustering results
	CComboBox CO_ResFormat;
};
