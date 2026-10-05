#include "bench/fib.hpp"

// RE Benchmark TU 993 of 20000 (depth=28, stamp="default")
namespace bench_tu_993 {
constexpr unsigned long long result = ::bench::slow_fib<28, 993>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_993
