//===--- StaticDefinitionInAnonymousNamespaceCheck.h - clang-tidy*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_STATIC_DEFINITION_IN_ANONYMOUS_NAMESPACE_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_STATIC_DEFINITION_IN_ANONYMOUS_NAMESPACE_H

#include "../ClangTidy.h"

namespace clang {
namespace tidy {
namespace readability {

/// Finds static function and variable definitions in anonymous namespace.
///
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/readability-static-definition-in-anonymous-namespace.html
class StaticDefinitionInAnonymousNamespaceCheck : public ClangTidyCheck {
public:
  StaticDefinitionInAnonymousNamespaceCheck(StringRef Name, ClangTidyContext *Context)
      : ClangTidyCheck(Name, Context) {}
  void registerMatchers(ast_matchers::MatchFinder *Finder) override;
  void check(const ast_matchers::MatchFinder::MatchResult &Result) override;
};

} // namespace readability
} // namespace tidy
} // namespace clang

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_STATIC_DEFINITION_IN_ANONYMOUS_NAMESPACE_H
