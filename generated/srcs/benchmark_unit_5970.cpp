#include "bench/fib.hpp"

// RE Benchmark TU 5970 of 20000 (depth=28, stamp="default")
namespace bench_tu_5970 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5970>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5970
