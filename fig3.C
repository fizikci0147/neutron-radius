void fig3()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed May  6 18:18:27 2020) by ROOT version 6.15/01
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,1296,699);
   c1->Range(-0.163125,-0.1381579,-0.075625,0.8486842);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetBottomMargin(0.14);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t _fx1001[5] = {
   -0.115,
   -0.134,
   -0.114,
   -0.124,
   -0.115};
   Double_t _fy1001[5] = {
   0.1,
   0.2,
   0.3,
   0.4,
   0.5};
   Double_t _fex1001[5] = {
   0.003,
   0.009,
   0.003,
   0.0058,
   0.0036};
   Double_t _fey1001[5] = {
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(5,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,-0.15,-0.08);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.75);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->SetMarkerSize(1.3);
   Graph_Graph1001->GetXaxis()->SetTitle("<r_{n}^{2}> (fm^{2})");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.063);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelColor(0);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.055);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1001->GetYaxis()->SetTickLength(0);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t *dum = 0;
   TPolyLine *pline = new TPolyLine(5,dum,dum,"");

   ci = TColor::GetColor("#33ccff");
   pline->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   pline->SetLineColor(ci);
   pline->SetLineWidth(0);
   pline->SetPoint(0,-0.1183,0);
   pline->SetPoint(1,-0.1183,0.7);
   pline->SetPoint(2,-0.1139,0.7);
   pline->SetPoint(3,-0.1139,0);
   pline->SetPoint(4,-0.1183,0);
   pline->Draw("fsame");
   
   Double_t _fx1002[1] = {
   -0.106422};
   Double_t _fy1002[1] = {
   0.6};
   Double_t _fex1002[1] = {
   0.008898};
   Double_t _fey1002[1] = {
   0};
   gre = new TGraphErrors(1,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,-0.1170996,-0.0957444);
   Graph_Graph1002->SetMinimum(0.5);
   Graph_Graph1002->SetMaximum(1.7);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->SetMarkerSize(1.3);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.063);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.055);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p");
   
   Double_t _fx1003[5] = {
   -0.115,
   -0.134,
   -0.114,
   -0.124,
   -0.115};
   Double_t _fy1003[5] = {
   0.1,
   0.2,
   0.3,
   0.4,
   0.5};
   Double_t _fex1003[5] = {
   0.003,
   0.009,
   0.003,
   0.0058,
   0.0036};
   Double_t _fey1003[5] = {
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(5,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10011003 = new TH1F("Graph_Graph_Graph10011003","",100,-0.15,-0.08);
   Graph_Graph_Graph10011003->SetMinimum(0);
   Graph_Graph_Graph10011003->SetMaximum(0.75);
   Graph_Graph_Graph10011003->SetDirectory(0);
   Graph_Graph_Graph10011003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011003->SetLineColor(ci);
   Graph_Graph_Graph10011003->SetMarkerSize(1.3);
   Graph_Graph_Graph10011003->GetXaxis()->SetTitle("<r_{n}^{2}> (fm^{2})");
   Graph_Graph_Graph10011003->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10011003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011003->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011003->GetXaxis()->SetTitleSize(0.063);
   Graph_Graph_Graph10011003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011003->GetYaxis()->SetLabelColor(0);
   Graph_Graph_Graph10011003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph10011003->GetYaxis()->SetLabelSize(0.055);
   Graph_Graph_Graph10011003->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph_Graph10011003->GetYaxis()->SetTickLength(0);
   Graph_Graph_Graph10011003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10011003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011003);
   
   gre->Draw("p");
   TLatex *   tex = new TLatex(-0.1,0.1,"Krohn 1973");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.1,0.2,"Aleksandr 1986");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.1,0.3,"Koester 1995");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.1,0.4,"Kopecky 1997");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.1,0.5,"Kopecky 1997");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.095,0.6,"This Work");
   tex->SetTextAlign(13);
   tex->SetTextColor(2);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
