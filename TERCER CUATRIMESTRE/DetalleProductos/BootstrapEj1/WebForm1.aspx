<%@ Page Title="" Language="C#" MasterPageFile="~/MiMaster.Master" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="BootstrapEj1.WebForm1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>

<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <h2>Detalle del prod</h2>
    <p>Este parrafo es parte del WebForm1</p>
    <!-- Button trigger modal -->
    <button type="button" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#staticBackdrop">
        Ver detalle
    </button>

    <!-- Modal -->
    <div class="modal fade" id="staticBackdrop" data-bs-backdrop="static" data-bs-keyboard="false" tabindex="-1" aria-labelledby="staticBackdropLabel" aria-hidden="true">
        <div class="modal-dialog modal-dialog-scrollable modal-lg">
            <div class="modal-content">
                <div class="modal-body">
                    <div class="container text-center">
                        <div class="row">
                            <div class="col">
                                <div id="carouselExample" class="carousel slide" data-bs-theme="dark">
                                    <div class="carousel-inner">
                                        <div class="carousel-item active">
                                            <img src="https://http2.mlstatic.com/D_NQ_NP_2X_629121-MLA72550682668_112023-F.webp" class="d-block w-100" alt="...">
                                        </div>
                                        <div class="carousel-item" >
                                            <img src="https://http2.mlstatic.com/D_NQ_NP_2X_620045-MLU73365004860_122023-F.webp" class="d-block w-100" alt="...">
                                        </div>
                                        <div class="carousel-item">
                                            <img src="https://http2.mlstatic.com/D_NQ_NP_2X_761558-MLA74805954919_022024-F.webp" class="d-block w-100" alt="...">
                                        </div>
                                        <div class="carousel-item">
                                            <img src="https://http2.mlstatic.com/D_NQ_NP_2X_693262-MLU74856500739_032024-F.webp" class="d-block w-100" alt="...">
                                        </div>
                                    </div>
                                    <button class="carousel-control-prev" type="button" data-bs-target="#carouselExample" data-bs-slide="prev">
                                        <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                                        <span class="visually-hidden">Previous</span>
                                    </button>
                                    <button class="carousel-control-next" type="button" data-bs-target="#carouselExample" data-bs-slide="next">
                                        <span class="carousel-control-next-icon" aria-hidden="true"></span>
                                        <span class="visually-hidden">Next</span>
                                    </button>
                                </div>
                            </div>
                            <div class="col">
                                <div class="row">
                                    <h6 class="text-start" style = "color: darkgrey; font-weight: normal" >Motorola</h6>
                                    <h3 class="text-start mb-3">Moto G14 Dual SIM 128 GB gris oscuro 4 GB RAM</h3>
                                </div>
                                <div class="row">
                                    <h3 class="text-start mb-3">$233.451</h3>
                                </div>
                                <div class="row">
                                    <p style="text-align: justify">
                                        Doble cámara y más detalles
Sus 2 cámaras traseras de 50 Mpx/2 Mpx te permitirán tomar imágenes con más detalles y lograr efectos únicos como el famoso modo retrato de poca profundidad de campo.

Además, el dispositivo cuenta con cámara frontal de 8 Mpx para que puedas sacarte divertidas selfies o hacer videollamadas.

Más para ver
Con su pantalla IPS de 6.5", disfrutá de colores intensos y mayor nitidez en todos tus contenidos.

Mayor rendimiento
Su memoria RAM de 4 GB permite que tu smartphone funcione de manera fluida y sin demoras al realizar distintas tareas, jugar o navegar.
                                    </p>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Volver</button>
                    <button type="button" class="btn btn-primary">Agregar al carrito</button>
                </div>
            </div>
        </div>
    </div>
</asp:Content>
