#include "bench/fib.hpp"

// RE Benchmark TU 19949 of 20000 (depth=28, stamp="default")
namespace bench_tu_19949 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19949>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19949
