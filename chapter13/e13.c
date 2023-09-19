#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main()
{
    char domain[50], index_url[50];
    printf("Enter domain: ");
    scanf("%s", &domain);
    build_index_url(domain, index_url);

    printf("URL: ");
    puts(index_url);
    return 0;
}

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "https://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}
