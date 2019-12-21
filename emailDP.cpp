#include "emailDP.h"

// static size_t write_to_file(void *ptr, size_t size, size_t nmemb, void *stream)
// {
//   size_t written = fwrite(ptr, size, nmemb, (FILE *)stream);
//   return written;
// }

std::vector<std::string> getEmailList (std::string file_path) {
    std::vector<std::string> ids;

        // GOOGLE API
        // FILE *list_of_emails;
        // auto curl = curl_easy_init();
        // std::string url = "https://www.googleapis.com/gmail/v1/users/rachel.yq.liu@gmail.com/messages";
        // if (curl) {
        //     curl_easy_setopt(curl, CURLOPT_URL, url);
        //     curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
        //     curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
        //     curl_easy_setopt(curl, CURLOPT_USERPWD, "user:pass");
        //     curl_easy_setopt(curl, CURLOPT_USERAGENT, "curl/7.42.0");
        //     curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 50L);
        //     curl_easy_setopt(curl, CURLOPT_TCP_KEEPALIVE, 1L);
            
        //     list_of_emails = fopen(file_path, "wb");
        //     curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_to_file);
        //     curl_easy_setopt(curl, CURLOPT_WRITEDATA, weather_output);
            
        //     char* url;
        //     long response_code;
        //     double elapsed;
        //     curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
        //     curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME, &elapsed);
        //     curl_easy_getinfo(curl, CURLINFO_EFFECTIVE_URL, &url);
            
        //     curl_easy_perform(curl);
        //     curl_easy_cleanup(curl);
        //     curl = NULL;
        //     fclose (list_of_emails);
        // } 

    std::fstream inFile;
    inFile.open (file_path, std::ios::in);
    std::string info = "";
    int count = 0;
    while (std::getline(inFile, info) && count<4) {
        std::size_t id_pos = info.find ("id");
        if (id_pos != std::string::npos) {
            id_pos = id_pos + 6;
            info = info.substr (id_pos);
            std::size_t end_of_id_pos = info.find('"');
            if (end_of_id_pos != std::string::npos) {
                std::string current_id = info.substr (0, end_of_id_pos);
                ids.push_back(current_id);
                count++;
            }
        }
    }
    inFile.close();
    return ids;
}

std::vector<std::string> emails::getEmailInfo (std::vector <std::string> ids, std::string file_path_1, std::string file_path_2, std::string file_path_3, std::string file_path_4) {
    size = 0;
    std::vector <std::string> emailInfo;
    std::vector <std::string> file_paths;
    file_paths.push_back (file_path_1);
    file_paths.push_back (file_path_2);
    file_paths.push_back (file_path_3);
    file_paths.push_back (file_path_4);
    for (int i=0; i<4; i++) {
        size ++;
        std::string email_info_file_name = file_paths.at(i);
        // Below: this would be used if we had the API, but right now we need to reference these dummy files
        // std::string email_info_file_name = "email_info_" + std::to_string(i) + ".txt";

        // GOOGLE API CODE: This would work if we had the ability to authenticate
        // FILE *email_info;
        // auto curl = curl_easy_init();
        // std::string url = "https://www.googleapis.com/gmail/v1/users/rachel.yq.liu@gmail.com/messages/" + ids.at(i);
        // if (curl) {
        //     curl_easy_setopt(curl, CURLOPT_URL, url);
        //     curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
        //     curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
        //     curl_easy_setopt(curl, CURLOPT_USERPWD, "user:pass");
        //     curl_easy_setopt(curl, CURLOPT_USERAGENT, "curl/7.42.0");
        //     curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 50L);
        //     curl_easy_setopt(curl, CURLOPT_TCP_KEEPALIVE, 1L);
            
        //     email_info = fopen(email_info_file_name, "wb");
        //     curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_to_file);
        //     curl_easy_setopt(curl, CURLOPT_WRITEDATA, weather_output);
            
        //     char* url;
        //     long response_code;
        //     double elapsed;
        //     curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
        //     curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME, &elapsed);
        //     curl_easy_getinfo(curl, CURLINFO_EFFECTIVE_URL, &url);
            
        //     curl_easy_perform(curl);
        //     curl_easy_cleanup(curl);
        //     curl = NULL;
        //     fclose (email_info);
        // } 
        std::ifstream inFile;
        inFile.open (email_info_file_name, std::ios::in);
        std::string info((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
        std::size_t from_pos = info.find ("\"From\"");
        std::size_t subject_pos = info.find ("\"Subject\"");
        std::size_t end_from_pos = 0; 
        std::size_t end_subject_pos = 0;
        std::string from = "";
        std::string subject = "";
        if (from_pos != std::string::npos && subject_pos != std::string::npos ) {
            from = info.substr (from_pos);
            from_pos = from.find ("value");
            from_pos = from_pos + 9;
            from = from.substr (from_pos);
            end_from_pos = from.find ("u003");
            end_from_pos = end_from_pos - 2;
            from = from.substr (0, end_from_pos);

            subject = info.substr (subject_pos);
            subject_pos = subject.find ("value");
            subject_pos = subject_pos + 9;
            subject = subject.substr (subject_pos);
            end_subject_pos = subject.find ("\"");
            subject = subject.substr (0, end_subject_pos);
            std::string current_email = "Subject: " + subject + "\nFrom: " + from + "\n";
            emailInfo.push_back(current_email);
        }
        inFile.close();
    }
    return emailInfo;
}

void emails::findEmails(std::string list_of_emails, std::string file_path_1, std::string file_path_2, std::string file_path_3, std::string file_path_4)
{
    std::vector <std::string> emailIDList;
    emailIDList = getEmailList(list_of_emails);
    this->emails = getEmailInfo (emailIDList, file_path_1, file_path_2, file_path_3, file_path_4);
}

int emails::getSize(){
    return size;
}
