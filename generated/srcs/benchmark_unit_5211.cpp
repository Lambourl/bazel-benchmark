#include "bench/fib.hpp"

// RE Benchmark TU 5211 of 20000 (depth=28, stamp="default")
namespace bench_tu_5211 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5211>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5211
