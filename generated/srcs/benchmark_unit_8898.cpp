#include "bench/fib.hpp"

// RE Benchmark TU 8898 of 20000 (depth=28, stamp="default")
namespace bench_tu_8898 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8898>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8898
